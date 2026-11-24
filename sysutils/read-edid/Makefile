PORTNAME=	read-edid
PORTVERSION=	3.0.2
CATEGORIES=	sysutils
MASTER_SITES=	http://www.polypux.org/projects/${PORTNAME}/

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Tools for reading the EDID from a monitor
WWW=		http://www.polypux.org/projects/read-edid/

LIB_DEPENDS=	libx86.so:devel/libx86

USES=		cmake localbase

PLIST_FILES=	bin/get-edid bin/parse-edid share/man/man1/get-edid.1.gz
PORTDOCS=	AUTHORS ChangeLog LICENSE README

OPTIONS_DEFINE=	DOCS

dfly-patch:
	${REINPLACE_CMD} -E -e 's/defined[ ]*\([ ]*__FreeBSD__[ ]*\)/(defined(__FreeBSD__) || defined(__DragonFly__))/g' \
		-e 's/^#([[:space:]]*)ifdef[[:space:]]+__FreeBSD__/#\1if defined(__FreeBSD__) || defined(__DragonFly__)/' \
		-e 's/^#([[:space:]]*)ifndef[[:space:]]+__FreeBSD__/#\1if !defined(__FreeBSD__) \&\& !defined(__DragonFly__)/' \
		${WRKSRC}/get-edid/i2c-dev.h ${WRKSRC}/get-edid/classic.c ${WRKSRC}/get-edid/i2c.c

.include <bsd.port.mk>
