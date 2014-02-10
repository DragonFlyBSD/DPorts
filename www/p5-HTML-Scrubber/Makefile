# Created by: Foxfair Hu <foxfair@FreeBSD.org>
# $FreeBSD: head/www/p5-HTML-Scrubber/Makefile 333099 2013-11-07 13:55:25Z vanilla $

PORTNAME=	HTML-Scrubber
PORTVERSION=	0.11
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for scrubbing/sanitizing html

BUILD_DEPENDS=	p5-HTML-Parser>=3.47:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
