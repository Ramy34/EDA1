from urllib.request import urlopen
from urllib.parse import urljoin
from urllib.error import URLError, HTTPError
import re


def isInt(x):
    try:
        int(x)
        return True
    except ValueError:
        return False


def delDup(a, b):
    return [x for x in a if x not in b]


def buscador(url, urlList=[], badUrls=[]):
    pops = 0
    try:
        website = str(urlopen(url).read())
    except HTTPError as e:
        print("Error: ", e.code)
        badUrls.append(url)
        urlList.pop(urlList.index(url))
        return urlList
    except URLError as e:
        print("Error: ", e.reason)
        badUrls.append(url)
        urlList.pop(urlList.index(url))
        return urlList
    regexPat = '<a\s+(?:[^>]*?\s+)?href="(?!#|/")((?!ftp://|mailto:).*?)[#|"]'
    urls = re.findall(regexPat, website)
    urls = list(set(urls))
    i = 0
    for u in urls:
        if not re.compile("^https?://.*").match(u):
            urls[i] = urljoin(url, u)
        i += 1
    urls = delDup(urls, urlList)
    urlList += urls
    limUrls = len(urls)
    for u in range(limUrls):
        if u < limUrls - pops:
            if re.compile("^https?://(www.)?unam.mx/.*").match(urls[u]):
                print("Buscando: " + urls[u])
                buscador(urls[u], urlList, badUrls)
            else:
                urls.pop(u - pops)
                u -= 1
                pops += 1

    return urlList


def menu(urls, badUrls):
    choice = 'x'
    while choice != 0:
        choice = 'x'
        print("MENU")
        print("---------------------------------------------------------")
        print("    1)Listar URLs")
        print("    2)Indicar repeticiones de una URL dada")
        print("    3)Realizar busqueda de URL")
        print("    4)Numero de enlaces rotos")
        print("    5)Graficar tiempo de ejecucion del algoritmo")
        print("    0)Salir")
        print()

        while not isInt(choice):
            choice = input("Elija una opcion: ")
        choice = int(choice)

        if choice == 1:
            i = 0
            for url in urls:
                i += 1
                print(str(i) + ") " + url)
            for url in badUrls:
                i += 1
                print(str(i) + ") " + url + " [ROTO]")
        elif choice == 2:
            urlIn = input("Ingrese la URL o el numero de URL a buscar: ")
            try:
                int(urlIn)
                if urlIn < len(urls):
                    # Encontrar cantidad
                    pass
            except ValueError:
                if urlIn in urls:
                    # Encontrar cantidad
                    pass
        elif choice == 3:
            found = False
            urlIn = input("Ingrese su busqueda: ")
            for url in urls:
                if re.compile(".*" + urlIn + ".*").match(url):
                    if not found:
                        print("URLs encontradas: ")
                        found = True
                    print(url)
            if not found:
                print("No se encontraron URLs")
        elif choice == 4:
            print("Cantidad de enlaces rotos: " + len(badUrls))
        elif choice == 5:
            pass

urls = ["http://www.unam.mx/"]
rotos = []
buscador(urls[0], urls, rotos)
rotos = list(set(urls))
menu(urls, rotos)
