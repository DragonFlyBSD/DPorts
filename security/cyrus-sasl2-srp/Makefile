PKGNAMESUFFIX=	-srp

COMMENT=	SASL SRP authentication plugin
WWW=		https://www.cyrusimap.org/sasl/

CYRUS_CONFIGURE_ARGS=	--enable-srp

OPTIONS_DEFINE= SRP_SETPASS SSL
OPTIONS_DEFAULT= SRP_SETPASS SSL
SRP_SETPASS_DESC=		setting SRP secrets with saslpasswd
SRP_SETPASS_CONFIGURE_ENABLE=	srp-setpass

MAKE_JOBS_UNSAFE= yes
USES= ssl
CONFIGURE_ARGS= --with-openssl=${OPENSSLBASE}
CFLAGS= -I${OPENSSLINC}
LDFLAGS= -L${OPENSSLLIB}
.include "${.CURDIR}/../../security/cyrus-sasl2/Makefile.common"
