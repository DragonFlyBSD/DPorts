# New ports collection makefile for:	Event
# Date created:		29 Apr 2001
# Whom:			Sergey Skvortsov <skv@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Event/Makefile,v 1.26 2012/11/17 05:56:14 svnexp Exp $
#

PORTNAME=	Event
PORTVERSION=	1.20
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A Generic Perl Event Loop

PERL_CONFIGURE=	yes
PORTDOCS=	ANNOUNCE ChangeLog INSTALL MANIFEST README TODO Tutorial.pdf

MAN3=		Event.3 Event::MakeMaker.3 Event::generic.3

post-install:
.ifndef(NOPORTDOCS)
	@${ECHO_MSG} "===>   Installing documentation for ${PKGNAME}"
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${DOCSDIR}/
.endif

.include <bsd.port.mk>
