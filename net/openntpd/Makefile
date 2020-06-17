# $FreeBSD$

PORTNAME=	openntpd
PORTVERSION=	6.2p3
PORTREVISION=	6
PORTEPOCH=	2
CATEGORIES=	net
MASTER_SITES=	OPENBSD/OpenNTPD

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	Network Time Protocol (NTP) daemon

LICENSE=	ISCL

RUN_DEPENDS=	ca_root_nss>=0:security/ca_root_nss

USES=		ssl

CONFLICTS=	ntp ntp-devel ntpsec

USE_RC_SUBR=	openntpd
USERS=		_ntp
GROUPS=		_ntp

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-cacert=${LOCALBASE}/etc/ssl/cert.pem

SUB_FILES=	480.status-openntpd pkg-message
SUB_LIST=	MANPREFIX="${MANPREFIX}"

pre-build:
	${REINPLACE_CMD} -e 's,%%PREFIX%%,${PREFIX},g' \
	    ${WRKSRC}/src/ntpd.conf.5 ${WRKSRC}/src/ntpd.8

post-install:
	cd ${STAGEDIR}${PREFIX}/etc && ${MV} ntpd.conf ntpd.conf.sample
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/periodic/daily
	${INSTALL_SCRIPT} ${WRKDIR}/480.status-openntpd \
		${STAGEDIR}${PREFIX}/etc/periodic/daily

.include <bsd.port.pre.mk>

# Requires libtls from LibreSSL
.if ${SSL_DEFAULT:Mlibressl*}
CPPFLAGS+=		-I${OPENSSLINC}
LDFLAGS+=		-L${OPENSSLLIB}
.else # SSL_DEFAULT
USES:=			${USES:Nssl}
BUILD_DEPENDS+=		libressl-static>=0:security/libressl-static
CPPFLAGS+=		-I${LOCALBASE}/libressl-static/include
CFLAGS+=		-I${LOCALBASE}/libressl-static/include
LDFLAGS+=		-L${LOCALBASE}/libressl-static/lib

dfly-patch:
	${REINPLACE_CMD} -e '/LIBS=/s@-l$$ac_lib -lssl@-ltls -lssl@g' \
			 -e 's@-ltls@${LOCALBASE}/libressl-static/lib/libtls.a@g' \
			 -e 's@-lssl@${LOCALBASE}/libressl-static/lib/libssl.a@g' \
			 -e 's@-lcrypto@${LOCALBASE}/libressl-static/lib/libcrypto.a@g' \
                ${WRKSRC}/configure
.endif # SSL_DEFAULT

.include <bsd.port.post.mk>
