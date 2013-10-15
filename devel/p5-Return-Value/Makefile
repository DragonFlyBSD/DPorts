# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-Return-Value/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Return-Value
PORTVERSION=	1.666002
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RJBS
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Return::Value - Polymorphic Return Values

USES=		perl5
USE_PERL5=	configure

MAN3=	Return::Value.3

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -i '' -e 's/^Carp::cluck/# Carp::cluck/' ${WRKSRC}/lib/Return/Value.pm

.include <bsd.port.mk>
