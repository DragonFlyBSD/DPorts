# Created by: TAKATSU Tomonari <tota@FreeBSD.org>
# $FreeBSD: www/p5-VUser-Google-ProvisioningAPI/Makefile 338763 2014-01-05 13:05:56Z az $

PORTNAME=	VUser-Google-ProvisioningAPI
PORTVERSION=	0.24
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RSMITH/vuser
PKGNAMEPREFIX=	p5-

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Perl module that implements the Google Provisioning API

RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-Encode>=0:${PORTSDIR}/converters/p5-Encode \
		p5-XML-Simple>=0:${PORTSDIR}/textproc/p5-XML-Simple

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
