# Created by: Greg Larkin <glarkin@FreeBSD.org>
# $FreeBSD: devel/pear-VersionControl_SVN/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	VersionControl_SVN
PORTVERSION=	0.5.0
CATEGORIES=	devel pear

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	Wrapper interface for the Subversion command-line client

BUILD_DEPENDS=	pear>=1.9.4:${PORTSDIR}/devel/pear \
		pear-XML_Parser>=1.3.4:${PORTSDIR}/devel/pear-XML_Parser
RUN_DEPENDS=	pear>=1.9.4:${PORTSDIR}/devel/pear \
		pear-XML_Parser>=1.3.4:${PORTSDIR}/devel/pear-XML_Parser

USE_PHP=	yes
PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
