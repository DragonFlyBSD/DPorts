# New ports collection makefile for:	nomyso
# Date created:		Thu Dec 22 18:29:59 UTC 2005
# Whom:			Mario Sergio Fujikawa Ferreira <lioux@FreeBSD.org>
#
# $FreeBSD: ports/converters/nomyso/Makefile,v 1.6 2012/11/17 05:55:03 svnexp Exp $
#

PORTNAME=	nomyso
PORTVERSION=	4.3
CATEGORIES=	converters devel
MASTER_SITES=	http://www.devoresoftware.com/nomyso/
DISTNAME=	${PORTNAME}${PORTVERSION:S/.//}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Convert MASM/TASM files to NASM compatible sources

USE_ZIP=	yes
USE_PERL5_RUN=	yes
NO_WRKSUBDIR=	yes
NO_BUILD=	yes

PLIST_FILES=	bin/${PORTNAME}.pl

post-patch:
	@${REINPLACE_CMD} -E \
		-e 's|[[:cntrl:]]$$||' \
		-e 's|/usr/bin/perl|${PERL}|' \
		${WRKSRC}/${PORTNAME}.pl

do-install:
	@${INSTALL_SCRIPT} \
		${WRKSRC}/${PORTNAME}.pl \
		${PREFIX}/bin

.include <bsd.port.mk>
