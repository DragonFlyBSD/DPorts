# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: biology/p5-Bio-Glite/Makefile 327709 2013-09-20 15:55:44Z bapt $

PORTNAME=	Bio-Glite
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	biology perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl Interface to G-language

BUILD_DEPENDS=	p5-libwww>=5:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Bio::Glite.3

NO_STAGE=	yes
.include <bsd.port.mk>
