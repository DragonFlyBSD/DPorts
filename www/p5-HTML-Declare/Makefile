# New ports collection makefile for:	p5-HTML-Declare
# Date created:		2010-10-06
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-HTML-Declare/Makefile,v 1.3 2012/11/17 06:02:49 svnexp Exp $
#

PORTNAME=	HTML-Declare
PORTVERSION=	2.4
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	A very simple micro language to generate HTML

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser

PERL_CONFIGURE=	yes

MAN3=		HTML::Declare.3
PLIST_FILES=	%%SITE_PERL%%/HTML/Declare.pm \
		%%SITE_PERL%%/%%PERL_ARCH%%/auto/HTML/Declare/.packlist
PLIST_DIRS=	%%SITE_PERL%%/%%PERL_ARCH%%/auto/HTML/Declare

.include <bsd.port.mk>
