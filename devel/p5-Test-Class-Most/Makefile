# Created by:	Muhammad Moinur Rahman <5u623l20@gmail.com>
# $FreeBSD: ports/devel/p5-Test-Class-Most/Makefile,v 1.4 2012/11/24 03:42:31 svnexp Exp $

PORTNAME=	Test-Class-Most
PORTVERSION=	0.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:OVID
PKGNAMEPREFIX=	p5-

MAINTAINER=	5u623l20@gmail.com
COMMENT=	Test Classes the easy way

BUILD_DEPENDS=	p5-Test-Class>=0.33:${PORTSDIR}/devel/p5-Test-Class \
		p5-Test-Most>=0.31:${PORTSDIR}/devel/p5-Test-Most
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_MODBUILD=	yes

PLIST_FILES=	%%SITE_PERL%%/Test/Class/Most.pm
PLIST_DIRSTRY=	%%SITE_PERL%%/Test/Class %%SITE_PERL%%/Test

MAN3=		Test::Class::Most.3

.include <bsd.port.mk>
