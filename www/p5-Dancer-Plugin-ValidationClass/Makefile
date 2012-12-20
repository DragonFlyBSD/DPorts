# New ports collection makefile for:	Dancer::Plugin::ValidationClass
# Date created:		27 Jul 2011
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-Dancer-Plugin-ValidationClass/Makefile,v 1.7 2012/11/17 06:02:48 svnexp Exp $
#

PORTNAME=	Dancer-Plugin-ValidationClass
PORTVERSION=	0.120490
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:AWNCORP
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for centralized input validation for Dancer

RUN_DEPENDS=	\
	p5-Dancer>0:${PORTSDIR}/www/p5-Dancer \
	p5-Validation-Class>0:${PORTSDIR}/devel/p5-Validation-Class
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Dancer::Plugin::ValidationClass.3

.include <bsd.port.mk>
