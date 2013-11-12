# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: databases/p5-Class-DBI-SAK/Makefile 332592 2013-11-03 06:53:54Z vanilla $

PORTNAME=	Class-DBI-SAK
PORTVERSION=	1.4
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Class::DBI Swiss Army Knife (SAK)

BUILD_DEPENDS:=	${RUN_DEPENDS} \
		p5-mixin>=0:${PORTSDIR}/devel/p5-mixin
RUN_DEPENDS=	p5-Class-DBI>=0:${PORTSDIR}/databases/p5-Class-DBI \
		p5-Class-DBI-AbstractSearch>=0:${PORTSDIR}/databases/p5-Class-DBI-AbstractSearch \
		p5-Class-DBI-Pager>=0:${PORTSDIR}/databases/p5-Class-DBI-Pager

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
