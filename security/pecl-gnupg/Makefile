# Created by: mnag@FreeBSD.org
# $FreeBSD: security/pecl-gnupg/Makefile 324453 2013-08-09 17:22:27Z sunpoet $

PORTNAME=	gnupg
PORTVERSION=	1.3.3
CATEGORIES=	security
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PECL wrapper around the gpgme library

LIB_DEPENDS=	gpgme:${PORTSDIR}/security/gpgme

CFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ARGS=	--with-gnupg=${LOCALBASE}/include/gpgme
LDFLAGS+=	-L${LOCALBASE}/lib
USE_PHP=	yes
USE_PHPEXT=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|$$GNUPG_DIR/lib|${LOCALBASE}/lib|; s| -ldl||g' ${WRKSRC}/config.m4

.include <bsd.port.mk>
