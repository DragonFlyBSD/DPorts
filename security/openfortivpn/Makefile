PORTNAME=	openfortivpn
DISTVERSIONPREFIX=	v
DISTVERSION=	1.24.1
CATEGORIES=	security net-vpn

MAINTAINER=	atanubiswas484@gmail.com
COMMENT=	Client for PPP+SSL VPN tunnel services
WWW=		https://github.com/adrienverge/openfortivpn

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	gsed:textproc/gsed

USES= autoreconf cpe pkgconfig ssl gmake
CPE_VENDOR=	${PORTNAME}_project
USE_GITHUB=	yes
GH_ACCOUNT=	adrienverge

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_path_SED=${LOCALBASE}/bin/gsed \
		OPENSSL_CFLAGS=-I${OPENSSLINC} \
		OPENSSL_LIBS="-L${OPENSSLLIB} -lssl -lcrypto" \
		ac_cv_header_net_route_h=yes

CFLAGS= -I${OPENSSLINC}
LDFLAGS= -L${OPENSSLLIB}
PKGMESSAGE= ${DFLY_FILESDIR}/pkg-message
post-install:
	${MV} ${STAGEDIR}${ETCDIR}/config ${STAGEDIR}${ETCDIR}/config.sample
	${RM} ${STAGEDIR}${DATADIR}/config.template
	${RMDIR} ${STAGEDIR}${DATADIR}

dfly-patch:
	${REINPLACE_CMD} -e 's@xFreeBSD@xDragonFly@g' \
		${WRKSRC}/configure.ac
	${REINPLACE_CMD} -e 's@rtentry@rtentry_ofvpn@g' \
			 -e 's@rt_use@rt_use_ofvpn@g' \
		${WRKSRC}/src/ipv4.h ${WRKSRC}/src/ipv4.c

.include <bsd.port.mk>
