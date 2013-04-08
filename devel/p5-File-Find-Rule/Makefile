# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-File-Find-Rule/Makefile 315509 2013-03-29 00:44:53Z eadler $

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

PERL_CONFIGURE=	yes

MAN1=		findrule.1
MAN3=		File::Find::Rule.3 File::Find::Rule::Extending.3 \
		File::Find::Rule::Procedural.3

.include <bsd.port.mk>
