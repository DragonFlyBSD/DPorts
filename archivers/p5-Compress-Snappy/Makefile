# New ports collection makefile for:	p5-Compress-Snappy
# Date created:		2012-01-07
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/archivers/p5-Compress-Snappy/Makefile,v 1.3 2012/11/17 05:54:22 svnexp Exp $
#

PORTNAME=	Compress-Snappy
PORTVERSION=	0.19
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl interface to Google Snappy (de)compressor

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

LIB_DEPENDS=	snappy:${PORTSDIR}/archivers/snappy

PERL_CONFIGURE=	yes

MAN3=		Compress::Snappy.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501001
TEST_DEPENDS+=	p5-Test-Simple>=0.82:${PORTSDIR}/devel/p5-Test-Simple
.endif

.include <bsd.port.post.mk>
