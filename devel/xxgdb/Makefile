PORTNAME=	xxgdb
PORTVERSION=	1.12
PORTREVISION=	5
CATEGORIES=	devel
MASTER_SITES=	XCONTRIB/utilities

MAINTAINER=	cy@FreeBSD.org
COMMENT=	X window interface for gdb

USES=		imake xorg
USE_XORG=	ice sm x11 xaw xext xmu xt

# This isn't included in the original Imakefile for some reason.
#  Yes, I know this will recompile the program every time, but
#  we have the cookie anyway and it's much easier this way
#  than modifying the Imakefile.
post-build:
	cd ${WRKSRC} && ${CC} ${CFLAGS} -o xxgdbiowin xxgdbiowin.c

post-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xxgdbiowin ${STAGEDIR}${PREFIX}/bin

dfly-patch:
	${REINPLACE_CMD} -e 's@\(defined(__FreeBSD__)\)@(\1||defined(__DragonFly__))@g'	\
		${WRKSRC}/calldbx.c						\
		${WRKSRC}/command.c						\
		${WRKSRC}/filemenu.c						\
		${WRKSRC}/signals.c

.include <bsd.port.mk>
