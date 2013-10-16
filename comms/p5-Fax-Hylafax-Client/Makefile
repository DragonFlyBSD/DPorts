# Created by: Tony Shadwick <tshadwick@oss-solutions.com>
# $FreeBSD: comms/p5-Fax-Hylafax-Client/Makefile 327714 2013-09-20 16:03:29Z bapt $

PORTNAME=	Fax-Hylafax-Client
PORTVERSION=	1.02
CATEGORIES=	comms perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple Perl client for the HylaFAX fax server

BUILD_DEPENDS=	p5-Net>=0:${PORTSDIR}/net/p5-Net
RUN_DEPENDS=	p5-Net>=0:${PORTSDIR}/net/p5-Net

USES=		perl5
USE_PERL5=	configure

MAN3=		Fax::Hylafax::Client.3

NO_STAGE=	yes
.include <bsd.port.mk>
