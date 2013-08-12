# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: x11-toolkits/p5-Tk-JComboBox/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Tk-JComboBox
PORTVERSION=	1.14
PORTREVISION=	5
CATEGORIES=	x11-toolkits perl5 tk
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Contains a Label or Entry, a Button, and a Listbox

BUILD_DEPENDS=	p5-Tk>=804.027:${PORTSDIR}/x11-toolkits/p5-Tk
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	${PORTNAME:S/-/::/g}.3 Tk::CWidget.3 Tk::JComboBox::tutorial.3

.include <bsd.port.mk>
