# Created by: Rong-En Fan <rafan@FreeBSD.org>
# $FreeBSD: www/p5-Yahoo-Lifestyle/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Yahoo-Lifestyle
PORTVERSION=	0.2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	hcchien@hcchien.org
COMMENT=	A simple interface for Yahoo! Taiwan Lifestyle open APIs

BUILD_DEPENDS:=	${RUN_DEPENDS} \
		p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple
RUN_DEPENDS=	p5-Yahoo-BBAuth>=0:${PORTSDIR}/security/p5-Yahoo-BBAuth \
		p5-XML-Simple>=0:${PORTSDIR}/textproc/p5-XML-Simple \
		p5-libwww>0:${PORTSDIR}/www/p5-libwww

USES=		perl5
USE_PERL5=	configure

MAN3=		Yahoo::Lifestyle.3

NO_STAGE=	yes
.include <bsd.port.mk>
