# Created by: Sergey Skvortsov <skv@FreeBSD.org>
# $FreeBSD: devel/p5-Event/Makefile 331301 2013-10-22 16:57:44Z mat $

PORTNAME=	Event
PORTVERSION=	1.21
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Generic Perl Event Loop

OPTIONS_DEFINE=	DOCS

USES=		perl5
USE_PERL5=	configure

MAN3=		Event.3 Event::MakeMaker.3 Event::generic.3
PORTDOCS=	ANNOUNCE ChangeLog INSTALL MANIFEST README TODO Tutorial.pdf

NO_STAGE=	yes
.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${ECHO_MSG} "===>   Installing documentation for ${PKGNAME}"
	@${MKDIR} ${DOCSDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}/
.endif

.include <bsd.port.mk>
