PORTNAME=	sfm
PORTVERSION=	0.4
DISTVERSIONPREFIX=	v
CATEGORIES=	misc

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Simple file manager for Unix-like systems
WWW=		https://git.afify.dev/sfm/

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_ACCOUNT=	afify

PLIST_FILES=	bin/sfm share/man/man1/sfm.1.gz

dfly-patch:
	${REINPLACE_CMD} -e 's@-D_POSIX_C_SOURCE=200809L -D_XOPEN_SOURCE=700@@g' \
		${WRKSRC}/config.mk

.include <bsd.port.mk>
