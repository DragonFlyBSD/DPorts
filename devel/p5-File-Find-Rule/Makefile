# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-File-Find-Rule/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	File-Find-Rule
PORTVERSION=	0.33
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Alternative interface to File::Find

RUN_DEPENDS=	p5-Number-Compare>=0:${PORTSDIR}/math/p5-Number-Compare \
		p5-Text-Glob>=0.07:${PORTSDIR}/textproc/p5-Text-Glob
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN1=		findrule.1
MAN3=		File::Find::Rule.3 File::Find::Rule::Extending.3 \
		File::Find::Rule::Procedural.3

.include <bsd.port.mk>
