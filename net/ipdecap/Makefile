PORTNAME=	ipdecap
PORTVERSION=	0.7.2
DISTVERSIONPREFIX=	v
PORTREVISION=	2
CATEGORIES=	net

MAINTAINER=	loic-freebsd@loicp.eu
COMMENT=	Decapsulate traffic encapsulated within GRE, IPIP, 6in4, ESP protocols
WWW=		https://loicpefferkorn.net/ipdecap/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${LOCALBASE}/include/pcap/vlan.h:net/libpcap
LIB_DEPENDS=	libpcap.so.1:net/libpcap	# require ports libpcap

USES=		autoreconf gmake ssl
USE_GITHUB=	yes

GH_ACCOUNT=	lpefferkorn

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CFLAGS+=	-I${OPENSSLINC}
LDFLAGS+=	-L${OPENSSLLIB}
TEST_TARGET=	check

PLIST_FILES=	bin/ipdecap\
		share/man/man1/ipdecap.1.gz

.include <bsd.port.mk>
