# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: textproc/p5-Petal-Mail/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Petal-Mail
PORTVERSION=	0.31
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BPOSTLE
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Format text e-mail using Petal

BUILD_DEPENDS=	p5-Petal>=0:${PORTSDIR}/textproc/p5-Petal \
		p5-Encode>=0:${PORTSDIR}/converters/p5-Encode
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Petal::Mail.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
