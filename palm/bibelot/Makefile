# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: palm/bibelot/Makefile 324181 2013-08-03 08:45:51Z az $

PORTNAME=	bibelot
PORTVERSION=	0.9.4
CATEGORIES=	palm
MASTER_SITES=	SF/${PORTNAME}/Bibelot/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Formats and converts text documents into compressed PalmDoc .pdb files

PLIST_FILES=	bin/bibelot
USES=		perl5

WRKSRC=		${WRKDIR}/${PORTNAME}
NO_BUILD=	yes

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.pl ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
