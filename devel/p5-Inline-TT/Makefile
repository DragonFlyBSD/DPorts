# New ports collection makefile for:	p5-Inline-TT
# Date created:		2006-09-26
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/devel/p5-Inline-TT/Makefile,v 1.3 2012/11/17 05:56:19 svnexp Exp $
#

PORTNAME=	Inline-TT
PORTVERSION=	0.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Inline
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Provides inline support for template toolkit 2.x

RUN_DEPENDS=	p5-Inline>=0.42:${PORTSDIR}/devel/p5-Inline \
		p5-Template-Toolkit>=2.0:${PORTSDIR}/www/p5-Template-Toolkit

PERL_CONFIGURE=	yes

MAN3=		Inline::TT.3

.include <bsd.port.mk>
