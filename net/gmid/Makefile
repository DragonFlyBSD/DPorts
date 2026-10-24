PORTNAME=	gmid
DISTVERSION=	2.1.1
CATEGORIES=	net
MASTER_SITES=	https://github.com/omar-polo/${PORTNAME}/releases/download/${DISTVERSION}/ \
		https://ftp.omarpolo.com/

MAINTAINER=	freebsd@omarpolo.com
COMMENT=	Simple and secure Gemini server
WWW=		https://gmid.omarpolo.com

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libevent.so:devel/libevent

USES=		localbase pkgconfig ssl
USE_RC_SUBR=	gmid

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--sysconfdir=${PREFIX}/etc

TEST_TARGET=	regress

USERS=		_gmid
GROUPS=		_gmid

BUILD_DEPENDS= libressl-static>0:security/libressl-static
CFLAGS= -I${LOCALBASE}/libressl-static/include
LDFLAGS= -L${LOCALBASE}/libressl-static/lib -ltls -lssl -lcrypto
IGNORE= unmaintained, please request fixing to users mailing list
post-patch:
	@${REINPLACE_CMD} -e 's|/man|/share/man|' ${WRKSRC}/configure

post-install:
	${INSTALL_DATA} ${FILESDIR}/gmid.conf.sample \
		${STAGEDIR}${PREFIX}/etc/
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/gemexp
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/gg
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/gmid
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/titan

USES:= ${USES:Nssl}
LIB_DEPENDS:= ${LIB_DEPENDS:Nlibtls*}
.include <bsd.port.mk>
