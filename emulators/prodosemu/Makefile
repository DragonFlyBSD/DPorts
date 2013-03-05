# Created by: Joel Sutton <sutton@aardvark.apana.org.au>
# $FreeBSD: ports/emulators/prodosemu/Makefile,v 1.20 2013/02/04 12:15:59 svnexp Exp $

PORTNAME=	prodosemu
PORTVERSION=	0.1
CATEGORIES=	emulators
MASTER_SITES=	http://mirrors.apple2.org.za/apple2.caltech.edu/emulators/
DISTNAME=	${PORTNAME}.v${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Text based Apple IIe ProDOS emulator

RESTRICTED=	apple.rom copyright is owned by Apple and cannot be distributed.

WRKSRC=		${WRKDIR}/${PORTNAME}-v${PORTVERSION}

MAKE_JOBS_SAFE=	yes

PORTDOCS=	README
PLIST_FILES=	bin/prodos share/apple2/prodos-2e.rom
PLIST_DIRS=	share/apple2

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
