PORTNAME=	ss5
DISTVERSION=	3.8.9-8
PORTREVISION=	4
CATEGORIES=	net security
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${DISTVERSION}

MAINTAINER=	raffaele.delorenzo@libero.it
COMMENT=	SOCKS v4/v5 application layer gateway with many features
WWW=		https://ss5.sourceforge.net/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/License

USES=		ldap ssl
USE_RC_SUBR=	${PORTNAME}

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-binpathbase=${PREFIX}/sbin \
		--with-docpathbase=${PREFIX}/share/doc \
		--with-confpathbase=${PREFIX}/etc \
		--with-libpath=${PREFIX}/lib

MAKE_ARGS+=	CC="${CC}"
MAKE_ENV=	DATADIR=${DATADIR} EXAMPLESDIR=${EXAMPLESDIR}

CFLAGS+=	-fcommon

WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION:C/-[0-9]+//}

OPTIONS_DEFINE=	DOCS EXAMPLES

MAKE_JOBS_UNSAFE= yes
.include <bsd.port.options.mk>

.if ${OPSYS} == FreeBSD
CFLAGS+=	-Wno-error=incompatible-function-pointer-types
.endif

post-patch:
	@${REINPLACE_CMD} -e 's,/usr/local/etc/opt/ss5,${PREFIX}/etc/ss5,' \
		${WRKSRC}/include/config.h.in

post-install:
	${MKDIR} ${STAGEDIR}/var/log/ss5 ${STAGEDIR}${ETCDIR}
	${INSTALL_DATA} ${WRKSRC}/conf/ss5.conf \
		${STAGEDIR}${PREFIX}/etc/ss5/ss5.conf.sample
	${INSTALL_DATA} ${WRKSRC}/conf/ss5.ha \
		${STAGEDIR}${PREFIX}/etc/ss5/ss5.ha.sample
	${INSTALL_DATA} ${WRKSRC}/conf/ss5.passwd \
		${STAGEDIR}${PREFIX}/etc/ss5/ss5.passwd.sample

dfly-patch:
	${REINPLACE_CMD} 's@(UINT)pthread_self@(UINT)(uintmax_t)pthread_self@g' \
		${WRKSRC}/common/SS5MySql.c \
		${WRKSRC}/common/SS5OpenLdap.c \
		${WRKSRC}/modules/mod_authen/SS5Mod_authentication.c \
		${WRKSRC}/modules/mod_authen/SS5Pam.c \
		${WRKSRC}/modules/mod_authen/SS5Supa.c \
		${WRKSRC}/modules/mod_author/SS5Mod_authorization.c \
		${WRKSRC}/modules/mod_balance/SS5Mod_balance.c \
		${WRKSRC}/modules/mod_dump/SS5Mod_dump.c \
		${WRKSRC}/modules/mod_filter/SS5Mod_filter.c \
		${WRKSRC}/modules/mod_proxy/SS5Mod_proxy.c \
		${WRKSRC}/modules/mod_socks4/SS5Mod_socks4.c \
		${WRKSRC}/modules/mod_socks5/SS5Mod_socks5.c \
		${WRKSRC}/src/SS5Core.c \
		${WRKSRC}/src/SS5Core_GSS.c \
		${WRKSRC}/src/SS5GSSApi.c
	${REINPLACE_CMD} -e 's@(void \*)clientSocket@(void *)(uintptr_t)clientSocket@g' \
		${WRKSRC}/src/SS5Thread.c

.include <bsd.port.mk>
