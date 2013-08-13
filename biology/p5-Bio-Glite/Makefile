# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: biology/p5-Bio-Glite/Makefile 324174 2013-08-02 18:52:07Z mat $

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

.include <bsd.port.mk>
