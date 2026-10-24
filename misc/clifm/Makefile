PORTNAME=	clifm
PORTVERSION=	1.29
DISTVERSIONPREFIX=	v
CATEGORIES=	misc shells

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Non-curses, KISS file manager for the terminal
WWW=		https://github.com/leo-arch/clifm/wiki

LICENSE=	GPLv2+

RUN_DEPENDS=	gfind:misc/findutils guniq:sysutils/coreutils

USES=		desktop-file-utils gettext-runtime python:run \
		readline shebangfix
USE_GITHUB=	yes
GH_ACCOUNT=	leo-arch
GH_PROJECT=	${PORTNAME}-colors:cfmc
GH_TAGNAME=	c298f35:cfmc
ALL_TARGET=	build
MAKE_ENV=	LIBS_FreeBSD="-I${LOCALBASE}/include -L${LOCALBASE}/lib \
		-lreadline -lintl -lmagic"
SHEBANG_FILES=	misc/tools/deroff.py misc/tools/manpages_comp_gen.py

IGNORE= unmaintained, please request fixing to users mailing list
post-install:
	${INSTALL_DATA} ${WRKSRC_cfmc}/colors/*.clifm \
		${STAGEDIR}${DATADIR}/colors

dfly-patch:
	${REINPLACE_CMD} -e 's@FreeBSD@DragonFly@g' \
		${WRKSRC}/Makefile
	${REINPLACE_CMD} -e '/define _ACL_OK/d' \
		${WRKSRC}/src/checks.c
	${REINPLACE_CMD} -e '/HAVE_ST_BIRTHTIME/s@__BSD_VISIBLE@&__z@g' \
		${WRKSRC}/src/listing.c \
		${WRKSRC}/src/properties.c

.include <bsd.port.mk>
