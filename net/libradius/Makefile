PORTNAME=	libradius
PORTVERSION=	4.0
CATEGORIES=	net
MASTER_SITES=	https://avalon.dragonflybsd.org/misc/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	dports@ef.irc
COMMENT=	RADIUS Client Library

LICENSE=	BSD2CLAUSE

USES=		ssl

CFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB} -lcrypto

SUB_FILES=	pkg-message

PLIST_FILES=	include/radlib.h \
		include/radlib_vs.h \
		lib/libradius.a \
		lib/libradius.so \
		lib/libradius.so.4 \
		man/man3/libradius.3.gz \
		man/man5/radius.conf.5.gz

post-patch:
	${REINPLACE_CMD} -e "s@/etc/radius.conf@${LOCALBASE}&@g" \
		${WRKSRC}/radlib_private.h \
		${WRKSRC}/libradius.3 ${WRKSRC}/radius.conf.5

.include <bsd.port.mk>
