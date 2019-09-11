PORTNAME=	libtacplus
PORTVERSION=	4.0
CATEGORIES=	net
MASTER_SITES=	https://avalon.dragonflybsd.org/misc/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	dports@ef.irc
COMMENT=	TACACS+ client library

LICENSE=	BSD2CLAUSE

USES=		ssl

CFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB} -lcrypto

SUB_FILES=	pkg-message

PLIST_FILES=	include/taclib.h \
		lib/libtacplus.a \
		lib/libtacplus.so \
		lib/libtacplus.so.4 \
		man/man3/libtacplus.3.gz \
		man/man5/tacplus.conf.5.gz

post-patch:
	${REINPLACE_CMD} -e "s@/etc/tacplus.conf@${LOCALBASE}&@g" \
		${WRKSRC}/taclib_private.h \
		${WRKSRC}/libtacplus.3 ${WRKSRC}/tacplus.conf.5

.include <bsd.port.mk>
