PORTNAME=	comserv
PORTVERSION=	1.4.4
CATEGORIES=	comms net
MASTER_SITES=	https://BSDforge.com/projects/source/comms/comserv/

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Access local serial ports via network connections
WWW=		https://BSDforge.com/projects/comms/comserv/

LICENSE=	BSD2CLAUSE

DEPRECATED=	Abandonware, last release in 2002. Consider using comms/remserial
EXPIRATION_DATE=2024-02-29

USES=		tar:xz

PLIST_FILES=	sbin/comservd etc/comservd.conf.sample \
		etc/rc.d/comservd.sh.sample man/man8/comservd.8.gz

.include <bsd.port.mk>
