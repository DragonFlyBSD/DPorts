# Created by: giffunip@asme.org
# $FreeBSD: multimedia/ppm2fli/Makefile 327747 2013-09-20 20:57:48Z bapt $

PORTNAME=	ppm2fli
PORTVERSION=	2.1
CATEGORIES=	multimedia graphics
MASTER_SITES=	http://vento.pi.tu-berlin.de/ppm2fli/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Utilities to merge PPM files into animated FLI and backwards

MAN1=	ppm2fli.1 unflick.1

NO_STAGE=	yes
pre-patch:
	@${REINPLACE_CMD} -e 's|^C|#C|g ; \
		 s|gcc |\$${CC} |g' ${WRKSRC}/Makefile

do-install:
.for name in ppm2fli unflick
	${INSTALL_PROGRAM} ${WRKSRC}/${name} ${PREFIX}/bin/${name}
	${INSTALL_MAN} ${WRKSRC}/${name}.1 ${MANPREFIX}/man/man1/${name}.1
.endfor

.include <bsd.port.mk>
