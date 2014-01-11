# Created by: Douglas Thrift
# $FreeBSD: www/py-dtflickr/Makefile 338168 2013-12-30 20:55:18Z ohauer $

PORTNAME=	dtflickr
PORTVERSION=	1.5
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP \
		http://apt.douglasthrift.net/files/${PORTNAME}/ \
		http://code.douglasthrift.net/files/${PORTNAME}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	douglas@douglasthrift.net
COMMENT=	Spiffy Flickr API library using JSON

LICENSE=	APACHE20

USE_BZIP2=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.pre.mk>

.if ${PYTHON_VERSION} == "python2.5"
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}simplejson>=1.7:${PORTSDIR}/devel/py-simplejson
.endif

.include <bsd.port.post.mk>
