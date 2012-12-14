# New ports collection makefile for:	p5-HTML-FillInForm
# Date created:				March 30th 2001
# Whom:	      				Alex Kapranoff <kapr@crosswinds.net>
#
# $FreeBSD: ports/www/p5-HTML-FillInForm/Makefile,v 1.20 2012/11/17 06:02:49 svnexp Exp $
#

PORTNAME=	HTML-FillInForm
PORTVERSION=	2.1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module for auto-filling HTML form fields from previous values

BUILD_DEPENDS=	p5-HTML-Parser>=3.26:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS=	p5-HTML-Parser>=3.26:${PORTSDIR}/www/p5-HTML-Parser

INSTALL_TARGET=	pure_install
PERL_CONFIGURE=	yes

MAN3=		HTML::FillInForm.3

.include <bsd.port.mk>
