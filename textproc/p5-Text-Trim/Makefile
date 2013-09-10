# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: textproc/p5-Text-Trim/Makefile 325943 2013-09-02 06:35:34Z az $

PORTNAME=	Text-Trim
PORTVERSION=	1.02
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Text
PKGNAMEPREFIX=	p5-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Extract the structure of a quoted mail message

BUILD_DEPENDS=	p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple
RUN_DEPENDS=	p5-Test-Simple>=0:${PORTSDIR}/devel/p5-Test-Simple

USES=		perl5
USE_PERL5=	modbuild

MAN3=		Text::Trim.3

.include <bsd.port.mk>
