PORTNAME=	dhcpcd
DISTVERSION=	10.5.2
CATEGORIES=	net
MASTER_SITES=	https://github.com/NetworkConfiguration/${PORTNAME}/releases/download/v${DISTVERSION}/

MAINTAINER=	driesm@FreeBSD.org
COMMENT=	DHCP/IPv4LL/IPv6RS/DHCPv6 client
WWW=		https://roy.marples.name/projects/dhcpcd

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		compiler:c11 cpe tar:xz
CPE_VENDOR=	dhcpcd_project
USE_RC_SUBR=	dhcpcd

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--datadir=${PREFIX}/share/examples \
		--prefix=${PREFIX} \
		--without-udev

OPTIONS_DEFINE=		PRIVSEP
OPTIONS_DEFAULT=	PRIVSEP

PRIVSEP_DESC=		Enable or disable privelege seperation
PRIVSEP_CONFIGURE_ON=	--enable-privsep --privsepuser="_dhcp"
PRIVSEP_CONFIGURE_OFF=	--disable-privsep

CONFIGURE_ARGS+= --without-md5
post-install:
	${MV} ${STAGEDIR}${PREFIX}/etc/dhcpcd.conf ${STAGEDIR}${PREFIX}/etc/dhcpcd.conf.sample
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/sbin/dhcpcd

dfly-patch:
	${REINPLACE_CMD} -e '/onestatus/s@\(freebsd\*\))@\1|dragonfly*)@g' \
			 -e 's|which ntpd|which dntpd|' \
		${WRKSRC}/configure

.include <bsd.port.mk>
