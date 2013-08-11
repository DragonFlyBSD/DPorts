# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: textproc/p5-CSS-Squish/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	CSS-Squish
PORTVERSION=	0.10
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Compact many CSS files into one big file

RUN_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI
BUILD_DEPENDS:=	${RUN_DEPENDS}
BUILD_DEPENDS+=	p5-Test-LongString>=0:${PORTSDIR}/devel/p5-Test-LongString

MAN3=	CSS::Squish.3

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
