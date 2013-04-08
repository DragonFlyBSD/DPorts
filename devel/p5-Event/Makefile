# Created by: Sergey Skvortsov <skv@FreeBSD.org>
# $FreeBSD: devel/p5-Event/Makefile 315509 2013-03-29 00:44:53Z eadler $

PORTNAME=	Event
PORTVERSION=	1.21
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generic Perl Event Loop

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
