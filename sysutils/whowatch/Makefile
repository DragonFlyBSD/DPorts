# From Ravenports: http://ravenports.ironwolf.systems/catalog/bucket_0F/whowatch/standard

PORTNAME=	whowatch
PORTVERSION=	1.8.6
MASTER_SITES=	https://github.com/mtsuszycki/whowatch/releases/download/${PORTNAME}-${PORTVERSION}/
CATEGORIES=	sysutils

MAINTAINER=	zrj@efnet.irc
COMMENT=	Displays information in real time about users currently logged on

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		ncurses

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/whowatch man/man1/${PORTNAME}.1.gz

.include <bsd.port.mk>
