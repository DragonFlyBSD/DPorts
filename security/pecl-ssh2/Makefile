# Created by: Alexander Leidinger <netchild@FreeBSD.org>
# $FreeBSD: security/pecl-ssh2/Makefile 313281 2013-03-02 16:53:19Z miwi $

PORTNAME=	ssh2
PORTVERSION=	0.12
CATEGORIES=	security pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A PECL extension to the libssh2 library

LIB_DEPENDS=	ssh2:${PORTSDIR}/security/libssh2

USE_PHP=	yes
USE_PHPEXT=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib ${EXTRA_LIBS}

CONFIGURE_ARGS=	--with-ssh2

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|\$$SSH2_DIR/lib|\$$SSH2_DIR/\$$PHP_LIBDIR|g' ${WRKSRC}/config.m4

.include <bsd.port.post.mk>
