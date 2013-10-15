# Created by: Christopher Boumenot <boumenot@gmail.com>
# $FreeBSD: net/p5-Net-TiVo/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net-TiVo
PORTVERSION=	0.11
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	eg@fbsd.lt
COMMENT=	Framework for accessing TiVo using XML/HTTP

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-XML-Simple>=0:${PORTSDIR}/textproc/p5-XML-Simple \
		p5-Log-Log4perl>=0:${PORTSDIR}/devel/p5-Log-Log4perl \
		p5-Crypt-SSLeay>=0:${PORTSDIR}/security/p5-Crypt-SSLeay
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::TiVo.3 \
		Net::TiVo::Show.3 \
		Net::TiVo::Folder.3

NO_STAGE=	yes
.include <bsd.port.mk>
