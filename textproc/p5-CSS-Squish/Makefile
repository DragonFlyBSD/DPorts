# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: textproc/p5-CSS-Squish/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	CSS-Squish
PORTVERSION=	0.10
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Compact many CSS files into one big file

RUN_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI
BUILD_DEPENDS:=	${RUN_DEPENDS} \
		p5-Test-LongString>=0:${PORTSDIR}/devel/p5-Test-LongString

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
