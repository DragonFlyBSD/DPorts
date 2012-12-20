# New ports collection makefile for:	p5-HTML-Entities-Interpolate
# Date created:		2011-08-04
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-HTML-Entities-Interpolate/Makefile,v 1.3 2012/11/17 06:02:04 svnexp Exp $
#

PORTNAME=	HTML-Entities-Interpolate
PORTVERSION=	1.04
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Call HTML::Entities::encode_entities, via a hash, within a string

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-Tie-Function>=0:${PORTSDIR}/devel/p5-Tie-Function
RUN_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-Tie-Function>=0:${PORTSDIR}/devel/p5-Tie-Function
TEST_DEPENDS=	p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod

PERL_CONFIGURE=	yes

MAN3=		HTML::Entities::Interpolate.3

.include <bsd.port.mk>
