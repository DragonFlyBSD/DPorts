# New ports collection makefile for:    p5-HTML-Scrubber
# Date created:				31 Oct 2003
# Whom:					Foxfair Hu <foxfair@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-HTML-Scrubber/Makefile,v 1.9 2012/11/17 06:02:49 svnexp Exp $
#

PORTNAME=	HTML-Scrubber
PORTVERSION=	0.09
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for scrubbing/sanitizing html

BUILD_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser \
		p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAKE_JOBS_SAFE=  yes

PERL_CONFIGURE=	yes

MAN3=		HTML::Scrubber.3

.include <bsd.port.mk>
