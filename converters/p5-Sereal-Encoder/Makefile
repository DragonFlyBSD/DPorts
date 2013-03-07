# $FreeBSD: ports/converters/p5-Sereal-Encoder/Makefile,v 1.1 2013/02/05 12:26:49 svnexp Exp $

PORTNAME=	Sereal-Encoder
PORTVERSION=	0.26
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SMUELLER
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for fast, compact, powerful binary serialization

TEST_DEPENDS=	\
	p5-Test-LongString>0:${PORTSDIR}/devel/p5-Test-LongString \
	p5-Test-Warn>0:${PORTSDIR}/devel/p5-Test-Warn

PERL_CONFIGURE=	yes

MAN3=	Sereal::Encoder.3

.include <bsd.port.mk>
