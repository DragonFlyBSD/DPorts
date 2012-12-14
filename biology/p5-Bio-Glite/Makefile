# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/biology/p5-Bio-Glite/Makefile,v 1.6 2012/11/17 05:54:52 svnexp Exp $

PORTNAME=	Bio-Glite
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	biology perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	An Perl Interface to G-language

BUILD_DEPENDS=	p5-libwww>=5:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	YES

MAN3=	Bio::Glite.3

.include <bsd.port.mk>
