
PORTNAME=	dfly-nrelease-ports
PORTVERSION=	0.1b
CATEGORIES=	misc

MAINTAINER=	zrj@ef.irc
COMMENT=	nrelease complete distribution metaport

USES=		metaport

RUN_DEPENDS+=	ca_root_nss>0:security/ca_root_nss \
		git-lite>0:devel/git-lite \
		bind-tools>0:dns/bind-tools \
		isc-dhcp44-server>0:net/isc-dhcp44-server \
		cdrtools>0:sysutils/cdrtools \
		wpa_supplicant>0:security/wpa_supplicant

.include <bsd.port.mk>
